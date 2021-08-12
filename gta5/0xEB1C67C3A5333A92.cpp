// am_mp_arcade.ysc @ L295062
void func_4581()
{
  if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("gb_casino_heist_planning")) == 0)
  {
    if (func_4582())
    {
      SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("gb_casino_heist_planning"));
      if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("gb_casino_heist_planning")))
      {
        SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(joaat("gb_casino_heist_planning"), 41500);
        SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("gb_casino_heist_planning"));
      }
    }
  }
}