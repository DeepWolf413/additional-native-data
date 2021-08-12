// av_ridgeline_native.ysc @ L3073
bool func_72(var uParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 <= 2)
  {
    if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
    {
      if (PED::IS_TRACKED_PED_VISIBLE(uParam0->f_20[iVar0 /*14*/]))
      {
        return false;
      }
    }
    iVar0++;
  }
  return true;
}