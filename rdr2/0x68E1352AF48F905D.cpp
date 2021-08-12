// dominoes_sp.ysc @ L21584
void func_635(int iParam0, int iParam1)
{
  *iParam1 = MISC::GET_BITS_IN_RANGE(iParam0, 0, 4);
  iParam1->f_1 = (MISC::GET_BITS_IN_RANGE(iParam0, 5, 10) - 32);
  iParam1->f_1.f_1 = (MISC::GET_BITS_IN_RANGE(iParam0, 11, 16) - 32);
  iParam1->f_3 = MISC::GET_BITS_IN_RANGE(iParam0, 17, 19);
  iParam1->f_4 = MISC::GET_BITS_IN_RANGE(iParam0, 20, 31);
}