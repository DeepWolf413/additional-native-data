// mob4.ysc @ L68621
void func_1850(int iParam0, bool bParam1)
{
  if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
  {
    if (bParam1)
    {
      if (!ANIMSCENE::_0x34A0671BE613D3D0(iParam0) && !ANIMSCENE::_0xD70C7A30412F8FA0(iParam0))
      {
        ANIMSCENE::ABORT_ANIM_SCENE(iParam0, false);
      }
    }
    else if (ANIMSCENE::_0x34A0671BE613D3D0(iParam0))
    {
      ANIMSCENE::RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT(iParam0);
    }
  }
}