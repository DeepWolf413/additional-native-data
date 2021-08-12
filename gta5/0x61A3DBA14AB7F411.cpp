// am_ferriswheel.ysc @ L6137
void func_113()
{
  struct<3> Var0;
  
  if (func_44(PLAYER::PLAYER_PED_ID()))
  {
    func_80(&uLocal_395, 0);
    Local_325.f_20 = 160;
    Local_325.f_21 = 20;
    if (bLocal_323)
    {
      Var0 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, -0.25f, 0f) };
      func_116(&Local_325, Var0, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 50f, Local_325.f_20, Local_325.f_21, 3, 1101004800, 0, 0, -1082130432, 0);
      CAM::ATTACH_CAM_TO_PED_BONE(Local_325, PLAYER::PLAYER_PED_ID(), 31086, 0f, -0.25f, 0f, true);
    }
    else
    {
      func_115(&uLocal_379, 1);
      func_114(&uLocal_379, 0, 3000);
    }
    if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW"))
    {
      AUDIO::STOP_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
    }
    AUDIO::START_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE");
  }
  iLocal_396 = 1;
}