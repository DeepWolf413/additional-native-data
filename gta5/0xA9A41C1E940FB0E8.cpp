// am_mp_smpl_interior_ext.ysc @ L263839
void func_4408(bool bParam0)
{
  if (func_51(PLAYER::PLAYER_PED_ID()))
  {
    AUDIO::DISABLE_PED_PAIN_AUDIO(PLAYER::PLAYER_PED_ID(), !bParam0);
    AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), !bParam0);
  }
}