// abigail21_outro.ysc @ L1320
bool func_68()
{
  vector3 vVar0;

  if (PATHFIND::_0xEFC535C9FAF563B3(&vVar0))
  {
    if (MISC::GET_DISTANCE_BETWEEN_COORDS(-305.7542f, 793.8676f, 117.0224f, vVar0, true) < 400f || MISC::GET_DISTANCE_BETWEEN_COORDS(-808.5521f, -1279.315f, 42.6591f, vVar0, true) < 400f)
    {
      bLocal_15 = true;
      return true;
    }
  }
  return false;
}