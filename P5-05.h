/*	=================== _insert ==================
	pNew->link_pre  = NULL;
        else
            //adding to not empty list. set link_pre.
            pNext->link_pre  = pNew;
	    pPre ->link_next  = pNew;
	    pNew ->link_pre   = pPre;
        else
            pNext->link_pre   = pNew;