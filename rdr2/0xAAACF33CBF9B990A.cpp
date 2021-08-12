// coachrobberies.ysc @ L18466
void func_540()
{
  int iVar0;
  int iVar1;
  int iVar2;

  iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
  iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
  switch (iVar1)
  {
    case 0:
      iVar2 = 14;
      break;
    case 1:
      iVar2 = 15;
      break;
    case 2:
      iVar2 = 17;
      break;
    case 3:
      iVar2 = 18;
      break;
    case 4:
      iVar2 = 21;
      break;
    case 5:
      iVar2 = 22;
      break;
  }
  OBJECT::_0xAAACF33CBF9B990A(Local_51.f_2214[iVar0 /*3*/], iVar2);
}