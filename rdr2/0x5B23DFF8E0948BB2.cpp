// act_bankrobbery01.ysc @ L21487
void func_554(var uParam0, int iParam1)
{
  if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_565.f_91[iParam1]))
  {
    return;
  }
  switch (iParam1)
  {
    case 15:
      PATHFIND::_0xE5EF9DE716FF737E(uParam0->f_565.f_91[15], 1, 0);
      PATHFIND::_0xD17672447692478E(uParam0->f_565.f_91[15], 0);
      func_1037(&(uParam0->f_565.f_90), uParam0->f_565.f_91[15], 0);
      break;
    case 4:
      if (PATHFIND::_0xDE0EA444735C1368(uParam0->f_565.f_91[4]))
      {
        PATHFIND::_0x2C87C3E1C7B96EE2(uParam0->f_565.f_91[4]);
      }
      break;
    case 16:
    case 17:
    case 18:
    case 19:
      VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_565.f_91[iParam1], 0);
      POPULATION::_0x74C2B3DC0B294102(uParam0->f_565.f_91[iParam1]);
      break;
  }
  VOLUME::_DELETE_VOLUME(uParam0->f_565.f_91[iParam1]);
}