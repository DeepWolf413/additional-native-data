// fm_bj_race_controler.ysc @ L164877
void func_1987(int iParam0, float fParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (PED::IS_PED_A_PLAYER(iParam0) && !PED::IS_PED_DEAD_OR_DYING(iParam0, true))
    {
      if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
      {
        if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(iParam0, false))))
        {
          if (fParam1 == 0f)
          {
            fParam1 = PLAYER::GET_PLAYER_SPRINT_STAMINA_REMAINING(PLAYER::PLAYER_ID());
          }
          func_1988(fParam1);
        }
      }
    }
  }
}