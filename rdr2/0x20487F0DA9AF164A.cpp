// gang2.ysc @ L35299
int func_762(char[4] cParam0)
{
  if ((!func_1269(cParam0, 1, iLocal_300) || !func_1270(1, iLocal_300, cParam0)) || !func_804(iLocal_306 | 8, iLocal_300, cParam0, 1))
  {
    return 0;
  }
  if (!bLocal_295)
  {
    func_805(2);
    func_1275(iLocal_378[1], func_1331(1, iLocal_300), 2, 1073741824 /* Float: 2f */);
    func_812(iLocal_300, 1);
    func_925(iLocal_315[3], 103259813);
    fLocal_980 = 0.736f;
    fLocal_981 = 0.991f;
    GRAPHICS::_0xB8C984C0D47F4F07(fLocal_980, fLocal_981, 1);
    bLocal_295 = true;
  }
  else if ((ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_315[3]) && PED::_0xA0BC8FAED8CFEB3C(iLocal_315[3])) && PED::_0xA0BC8FAED8CFEB3C(iLocal_315[1]))
  {
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_378[1], false);
    ENTITY::SET_ENTITY_DYNAMIC(iLocal_378[1], true);
    func_811();
    func_795(0, 0);
    return 1;
  }
  return 0;
}