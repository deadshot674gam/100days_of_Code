def main():
    n = int(input())
    score_card = dict()
    max_score = 0
    winners_name = ""
    for i in range(n):
        name, score = input().split()
        score = int(score)
        if name in score_card.keys():
            score_card[name] += score
        else:
            score_card[name] = score
        
        if max_score<score_card[name]:
            max_score = score_card[name]
            winners_name = name
    
    max_score1 = max(score_card.values())
    if max_score!=max_score1:
        for i in score_card.keys():
            if score_card[i] == max_score1:
                winners_name = i
    
    print(winners_name)
main()