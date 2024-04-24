#include <iostream>

using namespace std;

bool checkwin(short pos, short last)
{
	pos = ~pos;
	switch (last)
	{
	case 0:
		if ((pos & 272) == 0)
			return true;
		if ((pos & 72) == 0)
			return true;
		if ((pos & 6) == 0)
			return true;
		return false;
	case 1:
		if ((pos & 5) == 0)
			return true;
		if ((pos & 144) == 0)
			return true;
		return false;
	case 2:
		if ((pos & 3) == 0)
			return true;
		if ((pos & 288) == 0)
			return true;
		if ((pos & 80) == 0)
			return true;
		return false;
	case 3:
		if ((pos & 48) == 0)
			return true;
		if ((pos & 65) == 0)
			return true;
		return false;
	case 4:
		if ((pos & 40) == 0)
			return true;
		if ((pos & 130) == 0)
			return true;
		if ((pos & 257) == 0)
			return true;
		if ((pos & 68) == 0)
			return true;
		return false;
	case 5:
		if ((pos & 260) == 0)
			return true;
		if ((pos & 24) == 0)
			return true;
		return false;
	case 6:
		if ((pos & 384) == 0)
			return true;
		if ((pos & 9) == 0)
			return true;
		if ((pos & 20) == 0)
			return true;
		return false;
	case 7:
		if ((pos & 320) == 0)
			return true;
		if ((pos & 18) == 0)
			return true;
		return false;
	case 8:
		if ((pos & 192) == 0)
			return true;
		if ((pos & 17) == 0)
			return true;
		if ((pos & 36) == 0)
			return true;
		return false;
	}
}

short minimax(short depth, short alpha, short beta, short position1, short position2, bool player){
	short tpos = (position1 | position2); 
	if (player)
	{
		short npos1 = ~position1;
		if ((tpos & 1) == 0) 
		{
			if ((npos1 & 272) == 0)
				return depth;
			if ((npos1 & 72) == 0)
				return depth;
			if ((npos1 & 6) == 0)
				return depth;
		}
		if ((tpos & 2) == 0)
		{
			if ((npos1 & 5) == 0)
				return depth;
			if ((npos1 & 144) == 0)
				return depth;
		}
		if ((tpos & 4) == 0)
		{
			if ((npos1 & 3) == 0)
				return depth;
			if ((npos1 & 288) == 0)
				return depth;
			if ((npos1 & 80) == 0)
				return depth;
		}
		if ((tpos & 8) == 0)
		{
			if ((npos1 & 48) == 0)
				return depth;
			if ((npos1 & 65) == 0)
				return depth;
		}
		if ((tpos & 16) == 0)
		{
			if ((npos1 & 40) == 0)
				return depth;
			if ((npos1 & 130) == 0)
				return depth;
			if ((npos1 & 257) == 0)
				return depth;
			if ((npos1 & 68) == 0)
				return depth;
		}
		if ((tpos & 32) == 0)
		{
			if ((npos1 & 260) == 0)
				return depth;
			if ((npos1 & 24) == 0)
				return depth;
		}
		if ((tpos & 64) == 0)
		{
			if ((npos1 & 384) == 0)
				return depth;
			if ((npos1 & 9) == 0)
				return depth;
			if ((npos1 & 20) == 0)
				return depth;
		}
		if ((tpos & 128) == 0)
		{
			if ((npos1 & 320) == 0)
				return depth;
			if ((npos1 & 18) == 0)
				return depth;
		}
		if ((tpos & 256) == 0)
		{
			if ((npos1 & 192) == 0)
				return depth;
			if ((npos1 & 17) == 0)
				return depth;
			if ((npos1 & 36) == 0)
				return depth;
		}
		short maxscore = depth - 3;
		if(alpha > maxscore)
			return alpha;
		depth--;
		if(depth == 0)
			return 0;
		if ((tpos & 16) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 16, position2, false);
			if(reschild > maxscore)
				return reschild;
			if(reschild > alpha){
				if(beta <= reschild)
					return reschild;
				alpha = reschild;
			}
		}
		if ((tpos & 256) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 256, position2, false);
			if(reschild > maxscore)
				return reschild;
			if(reschild > alpha){
				if(beta <= reschild)
					return reschild;
				alpha = reschild;
			}
		}
		if ((tpos & 64) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 64, position2, false);
			if(reschild > maxscore)
				return reschild;
			if(reschild > alpha){
				if(beta <= reschild)
					return reschild;
				alpha = reschild;
			}
		}
		if ((tpos & 4) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 4, position2, false);
			if(reschild > maxscore)
				return reschild;
			if(reschild > alpha){
				if(beta <= reschild)
					return reschild;
				alpha = reschild;
			}
		}
		if ((tpos & 1) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 1, position2, false);
			if(reschild > maxscore)
				return reschild;
			if(reschild > alpha){
				if(beta <= reschild)
					return reschild;
				alpha = reschild;
			}
		}
		if ((tpos & 128) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 128, position2, false);
			if(reschild > maxscore)
				return reschild;
			if(reschild > alpha){
				if(beta <= reschild)
					return reschild;
				alpha = reschild;
			}
		}
		if ((tpos & 32) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 32, position2, false);
			if(reschild > maxscore)
				return reschild;
			if(reschild > alpha){
				if(beta <= reschild)
					return reschild;
				alpha = reschild;
			}
		}
		if ((tpos & 8) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 8, position2, false);
			if(reschild > maxscore)
				return reschild;
			if(reschild > alpha){
				if(beta <= reschild)
					return reschild;
				alpha = reschild;
			}
		}
		if ((tpos & 2) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 2, position2, false);
			if(reschild > maxscore)
				return reschild;
			if(reschild > alpha){
				if(beta <= reschild)
					return reschild;
				alpha = reschild;
			}
		}
		return alpha;
	}
	else
	{
		short npos = ~position2;
		if ((tpos & 1) == 0)
		{
			if ((npos & 272) == 0)
				return -depth;
			if ((npos & 72) == 0)
				return -depth;
			if ((npos & 6) == 0)
				return -depth;
		}
		if ((tpos & 2) == 0)
		{
			if ((npos & 5) == 0)
				return -depth;
			if ((npos & 144) == 0)
				return -depth;
		}
		if ((tpos & 4) == 0)
		{
			if ((npos & 3) == 0)
				return -depth;
			if ((npos & 288) == 0)
				return -depth;
			if ((npos & 80) == 0)
				return -depth;
		}
		if ((tpos & 8) == 0)
		{
			if ((npos & 48) == 0)
				return -depth;
			if ((npos & 65) == 0)
				return -depth;
		}
		if ((tpos & 16) == 0)
		{
			if ((npos & 40) == 0)
				return -depth;
			if ((npos & 130) == 0)
				return -depth;
			if ((npos & 257) == 0)
				return -depth;
			if ((npos & 68) == 0)
				return -depth;
		}
		if ((tpos & 32) == 0)
		{
			if ((npos & 260) == 0)
				return -depth;
			if ((npos & 24) == 0)
				return -depth;
		}
		if ((tpos & 64) == 0)
		{
			if ((npos & 384) == 0)
				return -depth;
			if ((npos & 9) == 0)
				return -depth;
			if ((npos & 20) == 0)
				return -depth;
		}
		if ((tpos & 128) == 0)
		{
			if ((npos & 320) == 0)
				return -depth;
			if ((npos & 18) == 0)
				return -depth;
		}
		if ((tpos & 256) == 0)
		{
			if ((npos & 192) == 0)
				return -depth;
			if ((npos & 17) == 0)
				return -depth;
			if ((npos & 36) == 0)
				return -depth;
		}
		short minscore = 3 - depth;
		if(beta < minscore)
			return beta;
		depth--;
		if ((tpos & 16) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 16, true);
			if(reschild < minscore)
				return reschild;
			if(reschild < beta){
				if(reschild <= alpha)
					return reschild;
				beta = reschild;
			}
		}
		if ((tpos & 256) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 256, true);
			if(reschild < minscore)
				return reschild;
			if(reschild < beta){
				if(reschild <= alpha)
					return reschild;
				beta = reschild;
			}
		}
		if ((tpos & 64) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 64, true);
			if(reschild < minscore)
				return reschild;
			if(reschild < beta){
				if(reschild <= alpha)
					return reschild;
				beta = reschild;
			}
		}
		if ((tpos & 4) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 4, true);
			if(reschild < minscore)
				return reschild;
			if(reschild < beta){
				if(reschild <= alpha)
					return reschild;
				beta = reschild;
			}
		}
		if ((tpos & 1) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 1, true);
			if(reschild < minscore)
				return reschild;
			if(reschild < beta){
				if(reschild <= alpha)
					return reschild;
				beta = reschild;
			}
		}
		if ((tpos & 128) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 128, true);
			if(reschild < minscore)
				return reschild;
			if(reschild < beta){
				if(reschild <= alpha)
					return reschild;
				beta = reschild;
			}
		}
		if ((tpos & 32) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 32, true);
			if(reschild < minscore)
				return reschild;
			if(reschild < beta){
				if(reschild <= alpha)
					return reschild;
				beta = reschild;
			}
		}
		if ((tpos & 8) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 8, true);
			if(reschild < minscore)
				return reschild;
			if(reschild < beta){
				if(reschild <= alpha)
					return reschild;
				beta = reschild;
			}
		}
		if ((tpos & 2) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 2, true);
			if(reschild < minscore)
				return reschild;
			if(reschild < beta){
				if(reschild <= alpha)
					return reschild;
				beta = reschild;
			}
		}
		return beta;
	}
}

void display(short pos1, short pos2)
{
	for (short j = 8; j > -1;){
		for (short u = 0; u < 9; ++u){
			short tev = (((j + 3) / 3) * 3 - 1 - u / 3), tpr = (u + j % 3 + u / 3) & 1;
			if ((pos1 & (1 << tev)) > 0){
				if(tpr == 0)
					cout << "\033[1;31m#\033[0m";
				else
					cout << " ";
				goto fend;
			}
			else if((pos2 & (1 << tev)) > 0){
				if(tpr)
					cout << "\033[1;33m#\033[0m";
				else
					cout << " ";
				goto fend;
			}
			if (j % 3 == 1 && u % 3 == 1) 
				cout << tev + 1;
			else
				cout << " ";
			fend:
			if (u % 3 == 2 && u < 8) 
				cout << "|";
		}
		cout << endl;
		--j;
		if (j % 3 == 2)
			cout << "---+---+---" << endl;
	}
}

short minimaxmain(short depth, short alpha, short beta, short position1, short position2, bool player)
{
	short tpos = (position1 | position2); 
	if (player)
	{
		short npos1 = ~position1;
		if ((tpos & 1) == 0) 
		{
			if ((npos1 & 272) == 0)
				return 0;
			if ((npos1 & 72) == 0)
				return 0;
			if ((npos1 & 6) == 0)
				return 0;
		}
		if ((tpos & 2) == 0)
		{
			if ((npos1 & 5) == 0)
				return 1;
			if ((npos1 & 144) == 0)
				return 1;
		}
		if ((tpos & 4) == 0)
		{
			if ((npos1 & 3) == 0)
				return 2;
			if ((npos1 & 288) == 0)
				return 2;
			if ((npos1 & 80) == 0)
				return 2;
		}
		if ((tpos & 8) == 0)
		{
			if ((npos1 & 48) == 0)
				return 3;
			if ((npos1 & 65) == 0)
				return 3;
		}
		if ((tpos & 16) == 0)
		{
			if ((npos1 & 40) == 0)
				return 4;
			if ((npos1 & 130) == 0)
				return 4;
			if ((npos1 & 257) == 0)
				return 4;
			if ((npos1 & 68) == 0)
				return 4;
		}
		if ((tpos & 32) == 0)
		{
			if ((npos1 & 260) == 0)
				return 5;
			if ((npos1 & 24) == 0)
				return 5;
		}
		if ((tpos & 64) == 0)
		{
			if ((npos1 & 384) == 0)
				return 6;
			if ((npos1 & 9) == 0)
				return 6;
			if ((npos1 & 20) == 0)
				return 6;
		}
		if ((tpos & 128) == 0)
		{
			if ((npos1 & 320) == 0)
				return 7;
			if ((npos1 & 18) == 0)
				return 7;
		}
		if ((tpos & 256) == 0)
		{
			if ((npos1 & 192) == 0)
				return 8;
			if ((npos1 & 17) == 0)
				return 8;
			if ((npos1 & 36) == 0)
				return 8;
		}
		short ret, maxscore = depth - 3;
		depth--;
		if ((tpos & 16) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 16, position2, false);
			if(reschild > maxscore)
				return 4;
			if(reschild > alpha){
				if(beta <= reschild)
					return 4;
				alpha = reschild;
				ret = 4;
			}	
		}
		if ((tpos & 256) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 256, position2, false);
			if(reschild > maxscore)
				return 8;
			if(reschild > alpha){
				if(beta <= alpha)
					return 8;
				alpha = reschild;
				ret = 8;
			}
		}
		if ((tpos & 64) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 64, position2, false);
			if(reschild > maxscore)
				return 6;
			if(reschild > alpha){
				if(beta <= alpha)
					return 6;
				alpha = reschild;
				ret = 6;
			}
		}
		if ((tpos & 4) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 4, position2, false);
			if(reschild > maxscore)
				return 2;
			if(reschild > alpha){
				if(beta <= alpha)
					return 2;
				alpha = reschild;
				ret = 2;
			}
		}
		if ((tpos & 1) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 1, position2, false);
			if(reschild > maxscore)
				return 0;
			if(reschild > alpha){
				if(beta <= alpha)
					return 0;
				alpha = reschild;
				ret = 0;
			}
		}
		if ((tpos & 128) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 128, position2, false);
			if(reschild > maxscore)
				return 7;
			if(reschild > alpha){
				if(beta <= alpha)
					return 7;
				alpha = reschild;
				ret = 7;
			}
		}
		if ((tpos & 32) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 32, position2, false);
			if(reschild > maxscore)
				return 5;
			if(reschild > alpha){
				if(beta <= alpha)
					return 5;
				alpha = reschild;
				ret = 5;
			}
		}
		if ((tpos & 8) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 8, position2, false);
			if(reschild > maxscore)
				return 3;
			if(reschild > alpha){
				if(beta <= alpha)
					return 3;
				alpha = reschild;
				ret = 3;
			}
		}
		if ((tpos & 2) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1 | 2, position2, false);
			if(reschild > maxscore)
				return 1;
			if(reschild > alpha){
				if(beta <= alpha)
					return 1;
				alpha = reschild;
				ret = 1;
			}
		}
		return ret;
	}
	else
	{ 
		short npos = ~position2;
		if ((tpos & 1) == 0)
		{
			if ((npos & 272) == 0)
				return 0;
			if ((npos & 72) == 0)
				return 0;
			if ((npos & 6) == 0)
				return 0;
		}
		if ((tpos & 2) == 0)
		{
			if ((npos & 5) == 0)
				return 1;
			if ((npos & 144) == 0)
				return 1;
		}
		if ((tpos & 4) == 0)
		{
			if ((npos & 3) == 0)
				return 2;
			if ((npos & 288) == 0)
				return 2;
			if ((npos & 80) == 0)
				return 2;
		}
		if ((tpos & 8) == 0)
		{
			if ((npos & 48) == 0)
				return 3;
			if ((npos & 65) == 0)
				return 3;
		}
		if ((tpos & 16) == 0)
		{
			if ((npos & 40) == 0)
				return 4;
			if ((npos & 130) == 0)
				return 4;
			if ((npos & 257) == 0)
				return 4;
			if ((npos & 68) == 0)
				return 4;
		}
		if ((tpos & 32) == 0)
		{
			if ((npos & 260) == 0)
				return 5;
			if ((npos & 24) == 0)
				return 5;
		}
		if ((tpos & 64) == 0)
		{
			if ((npos & 384) == 0)
				return 6;
			if ((npos & 9) == 0)
				return 6;
			if ((npos & 20) == 0)
				return 6;
		}
		if ((tpos & 128) == 0)
		{
			if ((npos & 320) == 0)
				return 7;
			if ((npos & 18) == 0)
				return 7;
		}
		if ((tpos & 256) == 0)
		{
			if ((npos & 192) == 0)
				return 8;
			if ((npos & 17) == 0)
				return 8;
			if ((npos & 36) == 0)
				return 8;
		}
		short ret, minscore = 3 - depth;
		depth--;
		if ((tpos & 16) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 16, true);
			if(reschild < minscore)
				return 4;
			if(reschild < beta){
				if(reschild <= alpha)
					return 4;
				beta = reschild;
				ret = 4;
			}
		}
		if ((tpos & 256) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 256, true);
			if(reschild < minscore)
				return 8;
			if(reschild < beta){
				if(reschild <= alpha)
					return 8;
				beta = reschild;
				ret = 8;
			}
		}
		if ((tpos & 64) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 64, true);
			if(reschild < minscore)
				return 6;
			if(reschild < beta){
				if(reschild <= alpha)
					return 6;
				beta = reschild;
				ret = 6;
			}
		}
		if ((tpos & 4) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 4, true);
			if(reschild < minscore)
				return 2;
			if(reschild < beta){
				if(reschild <= alpha)
					return 2;
				beta = reschild;
				ret = 2;
			}
		}
		if ((tpos & 1) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 1, true);
			if(reschild < minscore)
				return 0;
			if(reschild < beta){
				if(reschild <= alpha)
					return 0;
				beta = reschild;
				ret = 0;
			}
		}
		if ((tpos & 128) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 128, true);
			if(reschild < minscore)
				return 7;
			if(reschild < beta){
				if(reschild <= alpha)
					return 7;
				beta = reschild;
				ret = 7;
			}
		}
		if ((tpos & 32) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 32, true);
			if(reschild < minscore)
				return 5;
			if(reschild < beta){
				if(reschild <= alpha)
					return 5;
				beta = reschild;
				ret = 5;
			}
		}
		if ((tpos & 8) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 8, true);
			if(reschild < minscore)
				return 3;
			if(reschild < beta){
				if(reschild <= alpha)
					return 3;
				beta = reschild;
				ret = 3;
			}
		}
		if ((tpos & 2) == 0)
		{
			short reschild = minimax(depth, alpha, beta, position1, position2 | 2, true);
			if(reschild < minscore)
				return 1;
			if(reschild < beta){
				if(reschild <= alpha)
					return 1;
				beta = reschild;
				ret = 1;
			}
		}
		return ret;
	}
}

int main()
{
	for (;;)
	{
		short pos1 = 0, pos2 = 0;
		if (rand() % 2)
		{
			cout << "Bot starts first" << endl;
			for (short itmain = 0;; itmain++)
			{
				short move1 = minimaxmain(9 - (itmain << 1), -100, 100, pos1, pos2, true);
				pos1 += (1 << move1);
				if (checkwin(pos1, move1))
				{
					display(pos1, pos2);
					cout << "You lose..." << endl;
					break;
				}
				if (itmain == 4)
				{
					display(pos1, pos2);
					cout << "Draw" << endl;
					break;
				}
				display(pos1, pos2);
				short move2;
				cin >> move2;
				for (; move2 < 0 or move2 > 9 or ((pos1 | pos2) & (1 << (move2 - 1))) > 0;)
					cin >> move2;
				pos2 += (1 << (move2 - 1));
			}
		}
		else
		{
			cout << "You start first" << endl;
			for (short itmain = 0;; itmain++)
			{
				display(pos1, pos2);
				short move2;
				cin >> move2;
				for (; move2 < 0 or move2 > 9 or ((pos1 | pos2) & (1 << (move2 - 1))) > 0;)
					cin >> move2;
				pos1 += (1 << (move2 - 1));
				if (itmain == 4)
				{
					display(pos1, pos2);
					cout << "Draw" << endl;
					break;
				}
				short move1 = minimaxmain(8 - (itmain << 1), -100, 100, pos1, pos2, false);
				pos2 += (1 << move1);
				if (checkwin(pos2, move1) == 1)
				{
					display(pos1, pos2);
					cout << "You lose..." << endl;
					break;
				}
			}
		}
	}
}
