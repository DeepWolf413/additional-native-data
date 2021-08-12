// abigail2_1.ysc @ L51471
bool func_1332(var uParam0, int iParam1)
{
  if (func_845(uParam0->f_1, 2))
  {
    return true;
  }
  if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1))
  {
    return false;
  }
  if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam1, true, false))
  {
    return false;
  }
  if (!func_845(uParam0->f_1, 1))
  {
    func_826(uParam0, iParam1);
  }
  if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, *uParam0))
  {
    func_811(&(uParam0->f_1), 2);
    return true;
  }
  return false;
}