// abigail2_1.ysc @ L37922
void func_904(char[4] cParam0)
{
  char cVar0[64];

  if (((!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12) || PED::IS_PED_FATALLY_INJURED(Global_35)) || ENTITY::GET_ENTITY_HEALTH(Global_35) <= 0)
  {
    if (func_1440(cParam0))
    {
      func_423(cParam0, 2);
      StringCopy(&cVar0, "PLAYER_DEAD", 64);
      if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
      {
        StringCopy(&cVar0, "PLAYER_KO", 64);
      }
      func_1441(cParam0, cVar0);
      func_159(cParam0, 2);
    }
  }
}