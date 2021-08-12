// aberdeenpigfarm.ysc @ L4855
bool func_208(int iParam0)
{
  if (!func_92(iParam0))
  {
    return false;
  }
  return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}