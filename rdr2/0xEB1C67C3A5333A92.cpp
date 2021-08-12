// act_bankrobbery01.ysc @ L11476
bool func_235(var uParam0)
{
  if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_18)))
  {
    return true;
  }
  if (!uParam0->f_11)
  {
    SCRIPTS::REQUEST_SCRIPT(&(uParam0->f_18));
    uParam0->f_11 = 1;
  }
  if (!SCRIPTS::HAS_SCRIPT_LOADED(&(uParam0->f_18)))
  {
    return false;
  }
  else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(uParam0->f_18))) > 0)
  {
    SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(uParam0->f_18)));
    return false;
  }
  else
  {
    uParam0->f_27 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(uParam0->f_18)), uParam0->f_26);
    func_61(&(uParam0->f_9), 4, 1);
    SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_18));
  }
  return true;
}