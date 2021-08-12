// abigail2_1.ysc @ L63739
void func_1721(var uParam0)
{
  int iVar0;

  if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
  {
    return;
  }
  if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_804, true, false))
  {
    return;
  }
  iVar0 = 0;
  while (iVar0 < 4)
  {
    if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_822[iVar0 /*9*/])) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, &(uParam0->f_822[iVar0 /*9*/])) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_804, &(uParam0->f_822[iVar0 /*9*/]))))
    {
      ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_804, &(uParam0->f_822[iVar0 /*9*/]));
    }
    uParam0->f_822[iVar0 /*9*/].f_8 = 0;
    iVar0++;
  }
}