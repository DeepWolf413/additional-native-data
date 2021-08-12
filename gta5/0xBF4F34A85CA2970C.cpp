// fm_mission_controller_2020.ysc @ L482425
void func_8295()
{
  char* sVar0;
  
  if (!func_200())
  {
    if (func_8296())
    {
      if (MISC::IS_BIT_SET(bLocal_36022, false))
      {
        HUD::_0xBF4F34A85CA2970C();
      }
      else if (Global_1669168)
      {
        if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
        {
          HUD::_0xBF4F34A85CA2970C();
          func_3055(sVar0, -1);
          MISC::SET_BIT(&bLocal_36022, false);
        }
      }
    }
  }
}