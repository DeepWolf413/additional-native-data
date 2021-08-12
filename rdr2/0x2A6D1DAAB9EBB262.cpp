// property_use_core.ysc @ L4227
bool func_145(var uParam0, int iParam1)
{
  if ((!ENTITY::DOES_ENTITY_EXIST(*iParam1) || ENTITY::IS_ENTITY_DEAD(*iParam1)) || PED::IS_PED_HUMAN(*iParam1))
  {
    return false;
  }
  uParam0->f_304.f_1 = *iParam1;
  STREAMING::_0x2A6D1DAAB9EBB262(*iParam1);
  return true;
}