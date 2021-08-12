// mob4.ysc @ L80083
char* func_2350()
{
  switch (BUILTIN::FLOOR(ANIMSCENE::GET_ANIM_SCENE_FLOAT(iLocal_309, "Leadin")))
  {
    case 1:
      return "IG3_LEADIN_RIGHT";
    case 2:
      return "IG3_LEADIN_FRONT";
    case 3:
      return "IG3_LEADIN_LEFT";
    default:
      break;
  }
  return "IG3_LEADIN_MAIN_ACTION";
}