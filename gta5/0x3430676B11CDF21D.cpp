// fm_bj_race_controler.ysc @ L533245
void func_8909()
{
  func_8911();
  if (Global_1312341.f_1)
  {
    if (!ENTITY::DOES_ENTITY_EXIST(Global_1312341.f_5))
    {
      Global_1312341.f_5 = OBJECT::CREATE_AMBIENT_PICKUP(joaat("pickup_vehicle_custom_script"), Global_1312341.f_2, 0, 2, func_8910(), true, false);
      OBJECT::RENDER_FAKE_PICKUP_GLOW(Global_1312341.f_2, 0);
      AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SPIKES", Global_1312341.f_5, "MP_RACE_SPIKES_SOUNDSET", true, 50);
      Global_1312341.f_1 = 0;
      Global_1312341 = 0;
    }
    else if (ENTITY::DOES_ENTITY_EXIST(Global_1312341.f_5))
    {
      OBJECT::DELETE_OBJECT(&(Global_1312341.f_5));
    }
  }
  else if (ENTITY::DOES_ENTITY_EXIST(Global_1312341.f_5))
  {
    OBJECT::RENDER_FAKE_PICKUP_GLOW(ENTITY::GET_ENTITY_COORDS(Global_1312341.f_5, true), 0);
  }
}