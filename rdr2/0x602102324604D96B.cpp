// abigail2_1.ysc @ L48510
bool func_1216(char[4] cParam0, int iParam1, int iParam2)
{
  char* sVar0;
  vector3 vVar1;
  float fVar4;

  if (!ENTITY::DOES_ENTITY_EXIST(Local_38[iParam1 /*8*/].f_7))
  {
    if (iParam2 && iLocal_25)
    {
      return false;
    }
    switch (iParam1)
    {
      case 2:
        vVar1 = { -2579.95f, 359.2413f, 149.6694f };
        fVar4 = 257.6546f;
        sVar0 = "Horse_01";
        break;
    }
    Local_38[iParam1 /*8*/].f_7 = func_1654(iLocal_15, vVar1, fVar4, 1, 1, 0, 1);
    func_775(iParam1);
    if (!MISC::IS_STRING_NULL(sVar0))
    {
      func_150(cParam0, Local_38[iParam1 /*8*/].f_7, sVar0, 0, 0, 0, 0);
    }
    return true;
  }
  return true;
}