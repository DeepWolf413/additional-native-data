// beat_animal_attack.ysc @ L17448
void func_509(var uParam0, vector3 vParam1)
{
  if (vParam1.x != 0)
  {
    TASK::_0x5D9B0BAAF04CF65B(*uParam0, vParam1.y, vParam1.x, vParam1.z);
  }
  else if (vParam1.y != -1)
  {
    TASK::_0x19BC99C678FBA139(*uParam0, vParam1.y, vParam1.z);
  }
}