class RecentCounter:
    def __init__(self) -> None:
        self.rq = []
        self.start = 0
        self.end = 0

    
    def ping(self, t:int)->int:
        self.rq.append(t)
        while self.start < self.end and self.rq[self.start] < t - 3000:
            self.start += 1
        self.end += 1
        return self.end - self.start


rc = RecentCounter()

r = rc.ping(1)
print(r)
print(rc.ping(100))
print(rc.ping(3001))
print(rc.ping(3002))

