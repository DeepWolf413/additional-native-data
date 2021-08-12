// abigail2_1.ysc @ L51405
bool func_1329(var uParam0)
{
  if (func_845(uParam0->f_1, 2))
  {
    return true;
  }
  if (!func_845(uParam0->f_1, 1))
  {
    func_815(uParam0);
  }
  if (STREAMING::HAS_MODEL_LOADED(*uParam0))
  {
    func_811(&(uParam0->f_1), 2);
    return true;
  }
  return false;
}