// ambient_solomon.ysc @ L700
void func_4(int* iParam0, struct<3> Param1, float fParam4)
{
  iParam0->f_1 = VEHICLE::CREATE_VEHICLE(joaat("akuma"), Param1, fParam4, true, true, false);
  if (func_75(iParam0->f_1))
  {
    ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_1, true);
    ENTITY::SET_ENTITY_COLLISION(iParam0->f_1, false, false);
    ENTITY::SET_ENTITY_VISIBLE(iParam0->f_1, false, false);
    VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0->f_1, false, true, false);
    *iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0->f_1, 26, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), -1, true, true);
    if (func_75(*iParam0))
    {
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
      ENTITY::SET_ENTITY_VISIBLE(*iParam0, false, false);
      AUDIO::STOP_PED_SPEAKING(*iParam0, true);
    }
  }
}