/*	=================== process ===================
	int* pick;
	void** dataOutPtr;
	STUDENT* pStu;
            case 'D': printList (list);
                      printf("pick an id\n");
                      scanf("%d",&pick);
                      removeNode(list, pick);
                      break;
            case 'A': printf("enter id:\n");
                      scanf("%d",&pick);
                      pStu->id = (int*)pick;
                      printf("ad soyad bolum sinif birer tab bosluk ile giriniz:\n");
                      scanf("\t%s\t%s\t%s\t%d\r",pStu->ad,pStu->soyad,pStu->bolum,&pStu->sinif);
                    addNode(list, pick);
                break;