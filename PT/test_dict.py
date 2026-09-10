def test(group_dict:dict[str, list]):
    user_groups = {}
    for group, users in group_dict.items():
        for u in users:
            if u not in users: user_groups[u] = []
            if group not in user_groups[u]: user_groups[u].append(group)

    return user_groups


print(test({"local": ["admin", "userA"],
		"public":  ["admin", "userB"],
		"administrator": ["admin"] }))

