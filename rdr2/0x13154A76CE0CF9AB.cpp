// av_slow_rider.ysc @ L2729
void func_53(var uParam0)
{
  if (uParam0->f_489 == 0)
  {
    uParam0->f_489 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
  }
  switch (uParam0->f_489)
  {
    case 0:
      iLocal_76 = 1158945036;
      break;
    case 1:
      iLocal_76 = -591185284;
      break;
    case 2:
      iLocal_76 = 609870013;
      break;
    case 3:
      iLocal_76 = -627948381;
      break;
    default:
      iLocal_76 = 1175090374;
      break;
  }
  iLocal_112 = PED::_REQUEST_METAPED_OUTFIT(iLocal_78, iLocal_76);
}