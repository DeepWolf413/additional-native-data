// am_casino_peds.ysc @ L37033
int func_270(int iParam0)
{
  int iVar0;
  
  iVar0 = func_49(iParam0);
  return OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_271(iVar0), 0.1f, func_48(iVar0), false, false, false);
}