let n = Scanf.scanf " %d" (fun x -> x)
;;

let solve() =
        if (Scanf.scanf " %d %d %d" (fun x -> fun y -> fun z -> x + y + z)) >= 2
        then 1
        else 0
;;

let rec solve_cases = function
        | 0 -> 0
        | n -> solve() + solve_cases(n - 1)
;;

let () = print_int(solve_cases n) in
let () = print_newline() in
()
;;
