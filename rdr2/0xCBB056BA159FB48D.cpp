// beat_stranded_rider.ysc @ L12791
bool func_347()
{
  if (func_24(iLocal_828, 512) || func_24(iLocal_828, 256))
  {
    return false;
  }
  if (func_31(Global_35, uLocal_597[0], 1, 1) < 12f)
  {
    if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_482))
    {
      if (!func_154(&uLocal_582))
      {
        func_35(&uLocal_582, 0);
      }
      if (func_165(&uLocal_582) > 3f)
      {
        return true;
      }
    }
    else if (func_154(&uLocal_582))
    {
      func_145(&uLocal_582);
    }
  }
  else if (func_154(&uLocal_582))
  {
    func_145(&uLocal_582);
  }
  return false;
}