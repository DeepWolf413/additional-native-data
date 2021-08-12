// am_beach_washup_cinematic.ysc @ L103
void func_3(var uParam0)
{
  struct<7> Var0;
  
  func_4(0, 1, 1, 0, 0, 0, 0);
  if (CAM::DOES_CAM_EXIST(uParam0->f_6))
  {
    CAM::DESTROY_CAM(uParam0->f_6, false);
  }
  PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
  *uParam0 = { Var0 };
}