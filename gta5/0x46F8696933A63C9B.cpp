// am_casino_peds.ysc @ L89074
char* func_704()
{
  return "Roulette_Wheel";
}

Vector3 func_705(int iParam0)
{
  char* sVar0;
  
  sVar0 = func_704();
  return func_706(iParam0, sVar0);
}

Vector3 func_706(int iParam0, char* sParam1)
{
  int iVar0;
  
  if (!func_703(iParam0, sParam1))
  {
    return 0f, 0f, 0f;
  }
  iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, sParam1);
  return ENTITY::_GET_ENTITY_BONE_POSITION_2(iParam0, iVar0);
}