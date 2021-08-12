// pb_prostitute.ysc @ L6008
void func_163(int iParam0, int iParam1, int iParam2)
{
  if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
  {
    return;
  }
  if (func_549())
  {
    NETWORK::NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(iParam0, iParam1, iParam2);
  }
  else
  {
    PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0, iParam1, iParam2);
  }
}