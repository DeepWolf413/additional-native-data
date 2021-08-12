// fm_bj_race_controler.ysc @ L538587
void func_9111(var uParam0)
{
  *uParam0 = PLAYER::PLAYER_PED_ID();
  uParam0->f_236++;
  if (uParam0->f_236 >= Global_4718592.f_56640)
  {
    uParam0->f_236 = 0;
  }
  if (func_19(&(uParam0->f_200)))
  {
    if (func_17(&(uParam0->f_200), 3000, 0))
    {
      if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
      {
        VEHICLE::SET_VEHICLE_REDUCE_GRIP(PED::GET_VEHICLE_PED_IS_IN(*uParam0, false), false);
      }
      AUDIO::STOP_AUDIO_SCENE("dlc_aw_arena_fire_pit_taking_damage_scene");
      func_283(&(uParam0->f_200));
    }
  }
}