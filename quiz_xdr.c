/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "quiz.h"

bool_t
xdr_quiz_cl_home (XDR *xdrs, quiz_cl_home *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->id, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_quiz_sr_home (XDR *xdrs, quiz_sr_home *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->id, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->score))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->pos))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_quiz_cl_req (XDR *xdrs, quiz_cl_req *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->id, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_quiz_sr_que (XDR *xdrs, quiz_sr_que *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->que_no))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->question, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->id, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_quiz_cl_ans (XDR *xdrs, quiz_cl_ans *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->que_no))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->id, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->answer, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_quiz_sr_reply (XDR *xdrs, quiz_sr_reply *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->reply, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->id, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->score))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_quiz_cl_pos (XDR *xdrs, quiz_cl_pos *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->id, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_quiz_sr_pos (XDR *xdrs, quiz_sr_pos *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->id, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->pos))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_quiz_cl_end (XDR *xdrs, quiz_cl_end *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->id, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_quiz_sr_end (XDR *xdrs, quiz_sr_end *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->id, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->score))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->pos))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_quiz_cl_lboard (XDR *xdrs, quiz_cl_lboard *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->id, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->index))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_quiz_sr_lboard (XDR *xdrs, quiz_sr_lboard *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->id, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->leader_id, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->leader_score))
		 return FALSE;
	return TRUE;
}
