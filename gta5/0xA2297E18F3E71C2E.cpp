// fm_mission_controller.ysc @ L366452
void func_5318(int iParam0, int iParam1)
{
  struct<3> Var0;
  struct<3> Var3;
  float fVar6;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), &Var0, &Var3);
    fVar6 = (Var3.f_2 - Var0.f_2);
    CAM::SET_GAMEPLAY_VEHICLE_HINT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0f, fLocal_79, 0f, true, iParam1, iParam0, 0);
    CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY((fLocal_76 * fVar6));
    CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_77);
    CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_78);
  }
}