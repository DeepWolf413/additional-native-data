// abigail2.ysc @ L36169
int func_276(int iParam0, float fParam1)
{
  float fVar0;
  
  if (func_464(PLAYER::PLAYER_PED_ID()) && func_464(iParam0))
  {
    if (func_287(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
    {
      if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
      {
        fVar0 = 40f;
      }
      else
      {
        fVar0 = 3f;
      }
      if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, false, true, 0))
      {
        if (func_277(iParam0, fParam1))
        {
          return 1;
        }
      }
    }
  }
  return 0;
}