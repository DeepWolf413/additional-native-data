// abigail2_1.ysc @ L14167
void func_15(bool bParam0)
{
  if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_43800))
  {
    if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43800))
    {
      ANIMSCENE::_DELETE_ANIM_SCENE(Global_43800);
    }
  }
  Global_43800 = -1;
  StringCopy(&Global_43802, "", 24);
  Global_16 = 0;
  if (bParam0)
  {
    func_205();
  }
  PAD::_0xA0CEFCEA390AAB9B(0);
}