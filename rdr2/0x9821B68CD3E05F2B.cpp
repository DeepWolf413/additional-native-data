// grays2.ysc @ L72954
void func_1943()
{
  float fVar0;
  int iVar1;

  if (!bLocal_245)
  {
    AUDIO::_PLAY_SOUND_FROM_ENTITY("Rope_Stess_loop", iLocal_432[1], "GRY2_Sounds", false, 0, 0);
    func_27(&uLocal_246, 0);
    bLocal_245 = true;
  }
  AUDIO::_0x9821B68CD3E05F2B("timeToRopeSnap", fLocal_244, "Rope_Stess_loop", "GRY2_Sounds");
  fVar0 = func_892(&uLocal_246);
  iVar1 = (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_432[1]) - 482);
  fLocal_244 = func_1606(0f, 1f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(24)));
}