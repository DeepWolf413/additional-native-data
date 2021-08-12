// abigail2_1.ysc @ L51453
bool func_1331(var uParam0)
{
  if (func_845(uParam0->f_1, 2))
  {
    return true;
  }
  if (!func_845(uParam0->f_1, 1))
  {
    func_819(uParam0);
  }
  if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
  {
    func_811(&(uParam0->f_1), 2);
    return true;
  }
  return false;
}