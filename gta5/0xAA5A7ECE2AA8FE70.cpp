// fmmc_launcher.ysc @ L544006
void func_8456(var uParam0, struct<3> Param1, float fParam4)
{
  var uVar0;
  struct<3> Var1;
  struct<3> Var4;
  
  if (func_7587(uParam0))
  {
    if (STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_4_car_select@player"))
    {
      Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_intro_seq@ig_4_car_select@player", "loop", Param1, 0f, 0f, fParam4, 0f, 2) };
      Var4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_intro_seq@ig_4_car_select@player", "loop", Param1, 0f, 0f, fParam4, 0f, 2) };
      if (func_5130())
      {
        Var1 = { -212.08f, 308.45f, 96.95f };
        Var4 = { 0f, 0f, -63.74f };
      }
      if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &uVar0, false, false))
      {
        Var1.f_2 = uVar0;
      }
      ENTITY::SET_ENTITY_COORDS(*uParam0, Var1, false, false, false, true);
      ENTITY::SET_ENTITY_ROTATION(*uParam0, Var4, 2, true);
      ENTITY::SET_ENTITY_COLLISION(*uParam0, true, false);
      PED::SET_PED_DESIRED_HEADING(*uParam0, ENTITY::GET_ENTITY_HEADING(*uParam0));
      PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(*uParam0, 0, "mp_intro_seq@ig_4_car_select@player", "loop", 1000f, true);
      PED::FORCE_PED_MOTION_STATE(*uParam0, -1871534317, true, 0, true);
      PED::SET_PED_RESET_FLAG(*uParam0, 321, true);
    }
  }
}