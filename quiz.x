#define BUFF 512 

struct quiz_cl_home {
	char id[BUFF];
};

struct quiz_sr_home {
        char id[BUFF];
	int score;
	int pos;
};

struct quiz_cl_req {
	char id[BUFF];
};

struct quiz_sr_que {
	int que_no;
	char question[BUFF];
	char id[BUFF];
};

struct quiz_cl_ans {
	int que_no;
	char id[BUFF];
	char answer[BUFF];
};


struct quiz_sr_reply {
	char reply[BUFF];
	char id[BUFF];
	int score;
};

struct quiz_cl_pos {
	char id[BUFF];
};

struct quiz_sr_pos {
        char id[BUFF];
        int pos;
};

struct quiz_cl_end {
	char id[BUFF];
};

struct quiz_sr_end {
	char id[BUFF];
	int score;
	int pos;
};

struct quiz_cl_lboard{
  char id[BUFF];
 int index;

};
struct quiz_sr_lboard {
        char id[BUFF];
        char leader_id[BUFF];
        int leader_score;
};

program QUIZ_PROG { version
	QUIZ_VERS {
		quiz_sr_home QUIZPROC(quiz_cl_home) = 1;
		quiz_sr_que QUIZQUESTIONPROC(quiz_cl_req) = 2;
		quiz_sr_reply REPLYPROC(quiz_cl_ans) = 3;
		quiz_sr_pos GETPOS(quiz_cl_pos) = 4;
		quiz_sr_lboard GETLEADERBOARD(quiz_cl_lboard) = 5;
		quiz_sr_end QUIZEND(quiz_cl_end) = 6;
	} = 1;
} = 0x13451111;
