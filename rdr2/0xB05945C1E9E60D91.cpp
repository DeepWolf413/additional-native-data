// rcm_bounty_rancher1.ysc @ L37521
bool func_1269()
{
  if (!PED::DOES_GROUP_EXIST(iLocal_838))
  {
    iLocal_838 = PED::CREATE_GROUP(0);
  }
  if (PED::DOES_GROUP_EXIST(iLocal_838))
  {
    if (!bLocal_451)
    {
      PED::SET_GROUP_FORMATION(iLocal_838, 5);
      PED::ADD_FORMATION_LOCATION(iLocal_838, -10f, -3f, 0f);
      PED::ADD_FORMATION_LOCATION(iLocal_838, 5f, -15f, 0f);
      bLocal_451 = true;
    }
    return true;
  }
  return false;
}