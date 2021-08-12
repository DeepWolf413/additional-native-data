// ambush_bnd_cliff1.ysc @ L10723
bool func_396(var uParam0)
{
  if (func_475(50))
  {
    if (func_476(uParam0->f_209, 1, 8, 0))
    {
      return true;
    }
  }
  if (func_477())
  {
    return true;
  }
  if (Global_1430231.f_4)
  {
    func_478(21);
    return true;
  }
  if (func_179(Global_1392581.f_3, 4) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
  {
    func_478(22);
    return true;
  }
  return false;
}