// campfire_gang.ysc @ L9064
bool func_234(var uParam0)
{
  vector3 vVar0;

  if (!func_7(uParam0, 262144))
  {
    if (!func_258(&(uParam0->f_491)))
    {
      func_73(&(uParam0->f_491), 0);
      return false;
    }
    else if (!func_86(&(uParam0->f_491), 2f))
    {
      return false;
    }
    if (!PED::WAS_PED_SKELETON_UPDATED(uParam0->f_40[2]) || !PED::WAS_PED_SKELETON_UPDATED(uParam0->f_40[3]))
    {
      return false;
    }
    vVar0 = { PED::GET_PED_BONE_COORDS(uParam0->f_40[2], 14413, 0f, 0f, 0f) };
    vVar0.f_2 = (vVar0.z + 1f);
    MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false);
    GRAPHICS::_ADD_BLOOD_POOL_2(vVar0, 0.5f, MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 1.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 0.6f), true, NaNf, false);
    vVar0 = { PED::GET_PED_BONE_COORDS(uParam0->f_40[3], 14413, 0f, 0f, 0f) };
    vVar0.f_2 = (vVar0.z + 1f);
    MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false);
    GRAPHICS::_ADD_BLOOD_POOL_2(vVar0, 0.5f, MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 1.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 0.6f), true, NaNf, false);
    func_1(uParam0, 262144);
  }
  return true;
}