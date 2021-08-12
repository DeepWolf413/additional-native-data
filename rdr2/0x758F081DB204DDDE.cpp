// beat_gold_panner.ysc @ L4997
bool func_171(int iParam0)
{
  var uVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return false;
  }
  if (PED::IS_PED_INJURED(iParam0))
  {
    return false;
  }
  if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
  {
    return true;
  }
  if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
  {
    return true;
  }
  if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
  {
    return true;
  }
  if (PED::_0x758F081DB204DDDE(iParam0))
  {
    return true;
  }
  return false;
}