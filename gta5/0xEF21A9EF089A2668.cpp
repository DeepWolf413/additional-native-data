// bigwheel.ysc @ L1058
void func_24()
{
  int iVar0;
  struct<3> Var1;
  
  fLocal_276 = (fLocal_276 + (fLocal_277 * SYSTEM::TIMESTEP()));
  if (fLocal_276 >= 360f)
  {
    fLocal_276 = (fLocal_276 - 360f);
    iLocal_275++;
  }
  if (func_30(iLocal_161))
  {
    ENTITY::SET_ENTITY_COORDS(iLocal_161, Local_278, true, false, false, true);
    ENTITY::SET_ENTITY_ROTATION(iLocal_161, (-fLocal_276 - (360f / 16f)), 0f, 0f, 2, true);
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_161, true);
  }
  if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
  {
    if (func_30(PLAYER::PLAYER_PED_ID()))
    {
      Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
    }
    AUDIO::SET_AUDIO_SCENE_VARIABLE("FAIRGROUND_RIDES_FERRIS_WHALE", "HEIGHT", (Var1.f_2 - fLocal_284));
  }
  iVar0 = 0;
  while (iVar0 < 16)
  {
    func_25(&(Local_162[iVar0 /*7*/]));
    iVar0++;
  }
}