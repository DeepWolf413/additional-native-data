// rural_bank_heist.ysc @ L118805
int func_897()
{
  if ((MISC::GET_GAME_TIMER() - iLocal_1812) > 500)
  {
    if (OBJECT::HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(-183.6612f, 6371.806f, 31.68116f, 4f, joaat("prop_fncwood_01b"), 1))
    {
      iLocal_1805 = 1;
      return 1;
    }
    iLocal_1812 = MISC::GET_GAME_TIMER();
  }
  return 0;
}