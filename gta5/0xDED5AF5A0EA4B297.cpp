// fanatic3.ysc @ L48404
void func_525()
{
  if (func_524(Local_96.f_28[0]))
  {
    iLocal_307 = Local_96.f_28[0];
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_307, 2, true);
    PED::ADD_RELATIONSHIP_GROUP("Buddy", &iLocal_356);
    PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_307, iLocal_356);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_356, 1862763509);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_356);
    PED::SET_DRIVER_RACING_MODIFIER(iLocal_307, 0.5f);
  }
  else
  {
    STREAMING::REQUEST_MODEL(joaat("ig_maryann"));
    while (!STREAMING::HAS_MODEL_LOADED(joaat("ig_maryann")))
    {
      SYSTEM::WAIT(0);
    }
    iLocal_307 = PED::CREATE_PED(26, joaat("ig_maryann"), 809.66f, 1279.76f, 360.49f, 122.53f, true, true);
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_307, 2, true);
    PED::ADD_RELATIONSHIP_GROUP("Buddy", &iLocal_356);
    PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_307, iLocal_356);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_356, 1862763509);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_356);
    PED::SET_DRIVER_RACING_MODIFIER(iLocal_307, 0.5f);
  }
  iLocal_158 = 0;
}