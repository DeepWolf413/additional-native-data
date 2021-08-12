// act_hunting_2.ysc @ L43891
int func_1236(int iParam0)
{
  int iVar0;

  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (ENTITY::IS_ENTITY_A_PED(iParam0))
    {
      iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
      if (PED::IS_PED_HUMAN(iVar0))
      {
        if (PED::IS_PED_MALE(iVar0))
        {
          return 536905469;
        }
        else
        {
          return -352521166;
        }
      }
    }
  }
  return 205298116;
}