// bankrobberies_simple.ysc @ L1288
void func_56(var uParam0, float fParam1, float fParam2)
{
  if (!func_8(&(uParam0->f_102), 2))
  {
    func_96(1);
    LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_BANK_ROBBERY"), 0, fParam2, fParam2, 0, fParam1, fParam1, 0);
    func_51(&(uParam0->f_102), 2);
  }
}